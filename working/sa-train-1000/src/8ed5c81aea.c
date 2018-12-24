#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_1[55];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_9 = 82;                           // Tag.BODY
    if(entity_5 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 45;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'r';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER