# Домашнее задание к занятию «Поведенческие шаблоны: Command, Iterator, Observer, Chain of Responsibility»

### Задание 2. Паттерн «Наблюдатель»

Развиваем идею с логированием и пишем класс, за которым смогут наблюдать различные наблюдатели и реагировать на те или иные события.

В задании нужно реализовать несколько классов:

1. Наблюдаемый класс с методами:
- `void warning(const std::string& message) const;`
- `void error(const std::string& message) const;`
- `void fatalError(const std::string& message) const;`

Этот объект должен:

- уметь добавлять не владеющие указатели на наблюдателей,
- оповещать наблюдателей о вызове каждого из методов,
- корректно обрабатывать разрушение объектов-наблюдателей.

2. Далее нужно реализовать небольшую иерархию классов-наблюдателей, реализующих интерфейс:
```
class Observer {
public:
    virtual void onWarning(const std::string& message) {}
    virtual void onError(const std::string& message) {}
    virtual void onFatalError(const std::string& message) {}
};
```

В иерархии классов-наблюдателей нужно реализовать:

- класс для работы с предупреждениями, который будет печатать сообщение в консоль;
- класс для работы с ошибками, который будет печатать сообщение в файл по указанному пути;
- класс для работы с фатальными ошибками, который будет печатать сообщение в консоль и в файл по указанному пути.

------
