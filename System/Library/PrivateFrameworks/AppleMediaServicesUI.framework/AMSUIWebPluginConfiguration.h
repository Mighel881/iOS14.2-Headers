/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSUIWebPluginConfiguration : NSObject <NSSecureCoding> {

	NSString* _logKey;

}

@property (nonatomic,retain) NSString * logKey;              //@synthesize logKey=_logKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLogKey:(NSString *)arg1 ;
-(NSString *)logKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
