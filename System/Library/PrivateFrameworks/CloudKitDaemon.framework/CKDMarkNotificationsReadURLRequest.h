/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest {

	/*^block*/id _notificationMarkedReadProgressBlock;
	NSArray* _notificationIDs;
	NSMutableDictionary* _notificationIDsByRequestID;

}

@property (nonatomic,retain) NSArray * notificationIDs;                                     //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationIDsByRequestID;              //@synthesize notificationIDsByRequestID=_notificationIDsByRequestID - In the implementation block
@property (nonatomic,copy) id notificationMarkedReadProgressBlock;                          //@synthesize notificationMarkedReadProgressBlock=_notificationMarkedReadProgressBlock - In the implementation block
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)initWithOperation:(id)arg1 notificationIDsToMarkRead:(id)arg2 ;
-(void)setNotificationMarkedReadProgressBlock:(id)arg1 ;
-(NSMutableDictionary *)notificationIDsByRequestID;
-(void)setNotificationIDsByRequestID:(NSMutableDictionary *)arg1 ;
-(id)notificationMarkedReadProgressBlock;
@end
