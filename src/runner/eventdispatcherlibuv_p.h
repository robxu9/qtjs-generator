#pragma once

#include <QSocketNotifier>

#include "uv.h"

#include <memory>
#include <map>
#include <functional>

namespace qtjs {

struct SocketCallbacks {
    int eventMask;
    std::function<void()> readAvailable;
    std::function<void()> writeAvailable;
};

void uv_socket_watcher(uv_poll_t* handle, int status, int events);

struct LibuvApi {
    virtual ~LibuvApi() {}
    virtual int uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd);
    virtual int uv_poll_start(uv_poll_t* handle, int events, uv_poll_cb cb);
    virtual int uv_poll_stop(uv_poll_t* handle);
};

class EventDispatcherLibUvPrivate {
public:
    EventDispatcherLibUvPrivate(LibuvApi *api = nullptr);
    void registerSocketNotifier(int fd, QSocketNotifier::Type type, std::function<void()> callback);
    void unregisterSocketNotifier(int fd, QSocketNotifier::Type type);
    void registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject* object);
    bool unregisterTimer(int timerId);
private:
    std::unique_ptr<LibuvApi> api;
    std::map<int, uv_poll_t> socketWatchers;
    std::map<int, bool> timers;
    uv_poll_t &findOrCreateWatcher(int fd);
};

}
