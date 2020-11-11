/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface LSAppClipMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _appClipPlist;
	NSArray* _parentApplicationIdentifiers;

}

@property (readonly) NSArray * parentApplicationIdentifiers;              //@synthesize parentApplicationIdentifiers=_parentApplicationIdentifiers - In the implementation block
@property (readonly) BOOL wantsEphemeralNotifications; 
@property (readonly) BOOL wantsLocationConfirmation; 
+(BOOL)supportsSecureCoding;
+(id)new;
-(id)_initWithApplicationRecord:(id)arg1 parentApplicationIdentifiers:(id)arg2 appClipPlist:(id)arg3 ;
-(NSArray *)parentApplicationIdentifiers;
-(BOOL)wantsLocationConfirmation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wantsEphemeralNotifications;
@end
