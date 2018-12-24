#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_4 = 89;                           // Tag.BODY
    char entity_0[42];                       // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 44;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'C';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER