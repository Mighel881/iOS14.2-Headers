/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL configuredForLeftWrist; 
@property (nonatomic,copy) NSString * interfaceOrientation; 
@property (assign,nonatomic) BOOL victoryDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchData;
+(id)watchDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)interfaceOrientation;
-(id)encodedClassName;
-(BOOL)configuredForLeftWrist;
-(void)setConfiguredForLeftWrist:(BOOL)arg1 ;
-(BOOL)victoryDevice;
-(void)setVictoryDevice:(BOOL)arg1 ;
-(void)setInterfaceOrientation:(NSString *)arg1 ;
@end

