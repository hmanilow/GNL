# Get_next_line

Функция, которая читает из файла дескриптора, возвращая следующую строку при каждом вызове. Используется в цикле для итерации по каждой строке.

## Итоговая оценка : 112/125

Обязательная часть : 100/100

Бонусная часть : 12/25

### Как использовать

Включите ``get_next_line.h`` в заголовок вашего проекта. Вы можете вызвать функцию, отправив ей дескриптор файла и указатель на место, где вы хотите получить строку:

```
int get_next_line(int fd, char **line);
```

Функция возвращает ``1`` после успешного чтения и ``0`` с последней строкой. В случае ошибки она вернет ``-1``.

# Get_next_line

A function that reads from a file descriptor, returning the next line on each call. Used in a loop to iterate on each line.

## Final grade : 112/125

Mandatory part : 100/100

Bonus part : 12/25

### How to use it

Include ``get_next_line.h`` in your project's header. You can call the function by sending it a file descriptor, and a pointer to where you want the line :

```
int		get_next_line(int fd, char **line);
```

The function returns ``1`` after a successful read, and ``0`` with the last line. It will return ``-1`` in case of error.
