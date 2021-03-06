/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSDictionary;

@interface CAMCaptureCommand : NSObject <NSCopying, NSCoding> {

	NSString* _reason;
	NSArray* _subcommands;

}

@property (nonatomic,copy) NSArray * subcommands;                                           //@synthesize subcommands=_subcommands - In the implementation block
@property (nonatomic,copy) NSString * reason;                                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL requiresSessionModification; 
@property (nonatomic,copy,readonly) NSString * sessionModificationLogReason; 
@property (nonatomic,readonly) double sessionModificationMinimumExecutionTime; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(NSString *)reason;
-(NSDictionary *)userInfo;
-(void)executeWithContext:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(double)sessionModificationMinimumExecutionTime;
-(BOOL)requiresSessionModification;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(NSString *)sessionModificationLogReason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addSubcommand:(id)arg1 ;
-(NSArray *)subcommands;
-(void)setSubcommands:(NSArray *)arg1 ;
-(void)removeSubcommand:(id)arg1 ;
@end

