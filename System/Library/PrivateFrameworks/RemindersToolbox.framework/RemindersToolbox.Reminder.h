/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemindersToolbox.framework/RemindersToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RemindersToolbox.Reminder : NSObject <NSSecureCoding> {

	 title;
	 isCompleted;
	 flagged;
	 locationTrigger;
	 contactTrigger;
	 subtasks;

}

@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) long long hash; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

