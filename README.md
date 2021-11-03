# Study-Cpp-TIMERS

### Qt graphical interface.

- Timer with start,stop and reset functionalities.
  8 TIMERS functions.

# startTimer(**milliseconds**);

```c++
int timerId = startTimer(100);
```

- Triggers **timerEvent** every **milliseconds**

- Returns (int) a timer identifier, or returns zero if it could not start a timer.

# void MainWindow::timerEvent(QTimerEvent \*event)...

- Function executed when triggered by `startTimer(__milliseconds__)`.

```c++
void MainWindow::timerEvent(QTimerEvent *event)
{
    cont++;
    ui->label->setNum(cont);
};
```

# killTimer(**timer identifier**);

```c++
killTimer(timerId);
```

- Stops timer identified by **timer identifier**.
