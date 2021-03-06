/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKServerChangeToken, CKRecordZoneID, NSString;

@interface UARPiCloudZone : NSObject {

	CKServerChangeToken* _changeToken;
	CKRecordZoneID* _zoneID;
	NSString* _containerID;

}

@property (copy) CKRecordZoneID * zoneID;                        //@synthesize zoneID=_zoneID - In the implementation block
@property (copy) CKServerChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (copy) NSString * containerID;                         //@synthesize containerID=_containerID - In the implementation block
-(CKRecordZoneID *)zoneID;
-(NSString *)containerID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)changeToken;
-(void)setContainerID:(NSString *)arg1 ;
-(id)initWithZoneID:(id)arg1 containerID:(id)arg2 ;
@end

