//
// Created by daheige on 2021/11/6.
//

#ifndef CTHINGS_RET_ALLOCATOR_H
#define CTHINGS_RET_ALLOCATOR_H

typedef struct {
    int number;
    char *msg;
} unit_t;
extern unit_t  *alloc_unit(void);
extern void free_unit(unit_t *);

#endif //CTHINGS_RET_ALLOCATOR_H
