// POPULATOR_H
// Created by daheige on 2021/11/6.

#ifndef CTHINGS_POPULATOR_H
#define CTHINGS_POPULATOR_H
// 定义类型别名
typedef struct {
    int number;
    char msg[20];
} unit_t;

extern void set_unit(unit_t *);

#endif //CTHINGS_POPULATOR_H
