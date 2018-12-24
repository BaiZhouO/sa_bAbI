#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_6[44];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_1 = rand();                                  // Tag.BODY
    entity_9 = 33;                                      // Tag.BODY
    if (entity_1 < entity_9){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_1 = 33;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_2 = 7; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_2] = 'm';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                      // Tag.POINTER_DEC
    entity_3 = &entity_2;                               // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_3 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER