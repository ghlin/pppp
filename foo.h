#ifndef FOO_INCLUDED
#define FOO_INCLUDED




#define FOO_VAL_0 0
#define FOO_VAL_MINUS_0   -1
#define FOO_VAL_PLUS_0    1
#define FOO_VAL_HALF_0    0
#define FOO_VAL_DOUBLE_0  0
#define FOO_VAL_1 1
#define FOO_VAL_MINUS_1   0
#define FOO_VAL_PLUS_1    2
#define FOO_VAL_HALF_1    0
#define FOO_VAL_DOUBLE_1  2
#define FOO_VAL_2 2
#define FOO_VAL_MINUS_2   1
#define FOO_VAL_PLUS_2    3
#define FOO_VAL_HALF_2    1
#define FOO_VAL_DOUBLE_2  4
#define FOO_VAL_3 3
#define FOO_VAL_MINUS_3   2
#define FOO_VAL_PLUS_3    4
#define FOO_VAL_HALF_3    1
#define FOO_VAL_DOUBLE_3  6
#define FOO_VAL_4 4
#define FOO_VAL_MINUS_4   3
#define FOO_VAL_PLUS_4    5
#define FOO_VAL_HALF_4    2
#define FOO_VAL_DOUBLE_4  8
#define FOO_VAL_5 5
#define FOO_VAL_MINUS_5   4
#define FOO_VAL_PLUS_5    6
#define FOO_VAL_HALF_5    2
#define FOO_VAL_DOUBLE_5  10
#define FOO_VAL_6 6
#define FOO_VAL_MINUS_6   5
#define FOO_VAL_PLUS_6    7
#define FOO_VAL_HALF_6    3
#define FOO_VAL_DOUBLE_6  12
#define FOO_VAL_7 7
#define FOO_VAL_MINUS_7   6
#define FOO_VAL_PLUS_7    8
#define FOO_VAL_HALF_7    3
#define FOO_VAL_DOUBLE_7  14
#define FOO_VAL_8 8
#define FOO_VAL_MINUS_8   7
#define FOO_VAL_PLUS_8    9
#define FOO_VAL_HALF_8    4
#define FOO_VAL_DOUBLE_8  16
#define FOO_VAL_9 9
#define FOO_VAL_MINUS_9   8
#define FOO_VAL_PLUS_9    10
#define FOO_VAL_HALF_9    4
#define FOO_VAL_DOUBLE_9  18
#define FOO_PLUS(N)   FOO_CAT(FOO_VAL_PLUS_, N)
#define FOO_MINUS(N)  FOO_CAT(FOO_VAL_MINUS_, N)
#define FOO_HALF(N)   FOO_CAT(FOO_VAL_HALF_, N)
#define FOO_DOUBLE(N) FOO_CAT(FOO_VAL_DOUBLE_, N)




#define FOO_NARGS_DUMMY_ARGS 9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define FOO_NARGS_HELPER(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, Q, ...) Q
#define FOO_NARGS_DO_CNT(args...) FOO_NARGS_HELPER(args)
#define FOO_NARGS_COUNT(args...)  FOO_NARGS_DO_CNT(_, ##args, FOO_NARGS_DUMMY_ARGS)




#define FOO_CAT(a, b)      FOO_KITTY(a, b)
#define FOO_KITTY(a, b)    a##b
#define FOO_STRINGIFY(a)   FOO_QUOTE(a)
#define FOO_QUOTE(a)       #a




#define FOO_JOIN_2(a, b)     FOO_CAT(a, b)
#define FOO_JOIN_3(car, cdr...)  FOO_CAT(car, FOO_JOIN_2(cdr))
#define FOO_JOIN_4(car, cdr...)  FOO_CAT(car, FOO_JOIN_3(cdr))
#define FOO_JOIN_5(car, cdr...)  FOO_CAT(car, FOO_JOIN_4(cdr))
#define FOO_JOIN_6(car, cdr...)  FOO_CAT(car, FOO_JOIN_5(cdr))
#define FOO_JOIN_7(car, cdr...)  FOO_CAT(car, FOO_JOIN_6(cdr))
#define FOO_JOIN_8(car, cdr...)  FOO_CAT(car, FOO_JOIN_7(cdr))
#define FOO_JOIN_9(car, cdr...)  FOO_CAT(car, FOO_JOIN_8(cdr))
#define FOO_JOIN(args...)     FOO_CAT(FOO_JOIN_, FOO_NARGS_COUNT(args))(args)




#define FOO_APPLY_0(M, F, args...) F, ##args
#define FOO_APPLY_1(M, F, args...) M(F, ##args)
#define FOO_APPLY_2(M, F, args...)  M(FOO_APPLY_1(M, F, ##args), ##args)
#define FOO_APPLY_3(M, F, args...)  M(FOO_APPLY_2(M, F, ##args), ##args)
#define FOO_APPLY_4(M, F, args...)  M(FOO_APPLY_3(M, F, ##args), ##args)
#define FOO_APPLY_5(M, F, args...)  M(FOO_APPLY_4(M, F, ##args), ##args)
#define FOO_APPLY_6(M, F, args...)  M(FOO_APPLY_5(M, F, ##args), ##args)
#define FOO_APPLY_7(M, F, args...)  M(FOO_APPLY_6(M, F, ##args), ##args)
#define FOO_APPLY_8(M, F, args...)  M(FOO_APPLY_7(M, F, ##args), ##args)
#define FOO_APPLY_9(M, F, args...)  M(FOO_APPLY_8(M, F, ##args), ##args)
#define FOO_APPLY(N, M, F, args...)     FOO_CAT(FOO_APPLY_, N)(M, F, ##args)
#define FOO_PLUSX(N, PLS)    FOO_APPLY(PLS, FOO_PLUS, N)
#define FOO_MINUSX(N, MNS)   FOO_APPLY(MNS, FOO_MINUS, N)




#endif // FOO_INCLUDED
