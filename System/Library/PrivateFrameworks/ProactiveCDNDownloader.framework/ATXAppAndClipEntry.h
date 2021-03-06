/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveCDNDownloader.framework/ProactiveCDNDownloader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveCDNDownloader/ProactiveCDNDownloader-Structs.h>
@class NSString;

@interface ATXAppAndClipEntry : NSObject {

	BOOL _isTouristApp;
	unsigned long long _adamId;
	NSString* _urlHash;
	unsigned long long _radiusInMeters;
	unsigned long long _rank;
	CLLocationCoordinate2D _location;

}

@property (nonatomic,readonly) unsigned long long adamId;                      //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlHash;                        //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long radiusInMeters;              //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (nonatomic,readonly) unsigned long long rank;                        //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL isTouristApp;                              //@synthesize isTouristApp=_isTouristApp - In the implementation block
-(NSString *)urlHash;
-(unsigned long long)rank;
-(unsigned long long)radiusInMeters;
-(id)init;
-(BOOL)isEqualToAppAndClipEntry:(id)arg1 ;
-(CLLocationCoordinate2D)location;
-(BOOL)isTouristApp;
-(id)heroAppPredictionForLocation:(id)arg1 ;
-(id)initWithAdamId:(unsigned long long)arg1 urlHash:(id)arg2 location:(CLLocationCoordinate2D)arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)adamId;
@end

