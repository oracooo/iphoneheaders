/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>


@interface _VMUDWARFAttribute : NSObject {
	unsigned long long _name;
	unsigned long long _form;
}
+(id)attributeWithName:(unsigned long long)name withForm:(unsigned long long)form;
+(void)skipForm:(unsigned long long)form withView:(id)view wordSize:(unsigned char)size;
-(id)stringWithView:(id)view withStringTable:(id)stringTable;
-(void)skipWithView:(id)view wordSize:(unsigned char)size;
// inherited: -(id)description;
@end

