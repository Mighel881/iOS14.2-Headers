/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, BKSHIDEventSenderDescriptor;


@protocol BKHIDEventSenderInfo <NSObject>
@property (nonatomic,copy,readonly) NSString * displayUUID; 
@property (nonatomic,readonly) int eventSource; 
@property (nonatomic,readonly) unsigned long long senderID; 
@property (nonatomic,readonly) unsigned primaryUsagePage; 
@property (nonatomic,readonly) unsigned primaryUsage; 
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated; 
@property (getter=isBuiltIn,nonatomic,readonly) BOOL builtIn; 
@property (nonatomic,copy,readonly) BKSHIDEventSenderDescriptor * senderDescriptor; 
@required
-(NSString *)displayUUID;
-(BKSHIDEventSenderDescriptor *)senderDescriptor;
-(int)eventSource;
-(BOOL)isBuiltIn;
-(unsigned)primaryUsage;
-(unsigned long long)senderID;
-(BOOL)isAuthenticated;
-(unsigned)primaryUsagePage;

@end

