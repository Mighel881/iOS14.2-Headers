/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/REMFileAttachment.h>

@interface REMImageAttachment : REMFileAttachment {

	unsigned long long _width;
	unsigned long long _height;

}

@property (assign,nonatomic) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 width:(unsigned long long)arg8 height:(unsigned long long)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
@end
