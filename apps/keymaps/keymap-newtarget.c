/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 200
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

/* Button Code Definitions for <new> target */

#include "config.h"
#include "action.h"
#include "button.h"

#define LAST_ITEM_IN_LIST { ACTION_NONE,BUTTON_NONE,BUTTON_NONE }
/* {Action Code,    Button code,    Prereq button code } */

/**
    This file is where all button mappings are defined.
    In ../action.h there is an enum with all the used ACTION_ codes.
    Ideally All the ACTION_STD_* and ACTION_WPS_* codes should be defined somehwere in this file.

    Remeber to make a copy of this file and rename it to keymap-<targetname>.c and add it to apps/SOURCES

    Good luck and thanks for porting a new target! :D

**/

/* 
 * The format of the list is as follows
 * { Action Code,   Button code,    Prereq button code } 
 * if there's no need to check the previous button's value, use BUTTON_NONE
 * Insert LAST_ITEM_IN_LIST at the end of each mapping 
 */
struct button_mapping button_context_standard[]  = {

    LAST_ITEM_IN_LIST
}; /* button_context_standard */

struct button_mapping button_context_wps[]  = {

    LAST_ITEM_IN_LIST
}; /* button_context_wps */



/* get_context_mapping returns a pointer to one of the above defined arrays depending on the context */
struct button_mapping* get_context_mapping(int context)
{
    switch (context)
    {
        case CONTEXT_STD:
            return button_context_standard;
        case CONTEXT_WPS:
            return button_context_wps;
            
        case CONTEXT_TREE:
        case CONTEXT_LIST:
        case CONTEXT_MAINMENU:
            
        case CONTEXT_SETTINGS:
        case CONTEXT_SETTINGS|CONTEXT_REMOTE:
        default:
            return button_context_standard;
    } 
    return button_context_standard;
}
