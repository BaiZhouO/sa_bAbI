#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    char entity_5[48];                                  // Tag.BODY
    entity_0 = rand();                                  // Tag.BODY
    entity_8 = 78;                                      // Tag.BODY
    if (entity_0 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_0 = 23;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_9 = 3; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_9] = '8';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                      // Tag.POINTER_DEC
    entity_1 = &entity_9;                               // Tag.POINTER_DEC
    int entity_6;                                       // Tag.BODY
    char entity_7[5];                                   // Tag.BODY
    entity_6 = 89;                                      // Tag.BODY
    entity_7[entity_6] = 'L';                           // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_4 = (char *)(entity_1 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER