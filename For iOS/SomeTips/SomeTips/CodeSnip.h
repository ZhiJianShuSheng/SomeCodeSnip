//
//  CodeSnip.h
//  SomeTips
//
//  Created by Instanza on 2018/3/13.
//  Copyright © 2018年 wesly. All rights reserved.
//

#ifndef CodeSnip_h
#define CodeSnip_h

/**
 * Defines a block type.
 * supports blocks.
 */
#define XL_DEFINE_BLOCK_TYPE(name, retTy, argTys, ...) \
typedef retTy(^name)(argTys, ## __VA_ARGS__)

#define XL_DEFINE_BLOCK_TYPE_NO_ARGS(name, retTy) \
typedef retTy(^name)()


/**
 * Calls a block with arguments.
 */
#define XL_CALL_BLOCK(block, args, ...) block(args, ## __VA_ARGS__)

/**
 * Calls a block without arguments.
 */
#define XL_CALL_BLOCK_NO_ARGS(block) block()


#endif /* CodeSnip_h */
