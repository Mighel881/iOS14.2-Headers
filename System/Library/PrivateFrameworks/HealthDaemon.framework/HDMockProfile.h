/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDHealthDatabase, HDHealthDaemon;
@class HDSourceManager, HDDeviceManager, HDDaemon, HDDataCollectionManager, HDUserCharacteristicsManager;

@interface HDMockProfile : NSObject {

	id<HDHealthDatabase> healthDatabase;
	HDSourceManager* healthSourceManager;
	HDDeviceManager* healthDeviceManager;
	HDDaemon* daemon;
	id<HDHealthDaemon> _healthDaemon;
	HDDataCollectionManager* _dataCollectionManager;
	HDUserCharacteristicsManager* _userCharacteristicsManager;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon; 
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                                 //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) id<HDHealthDatabase> healthDatabase; 
@property (nonatomic,retain) HDSourceManager * healthSourceManager; 
@property (nonatomic,retain) HDDeviceManager * healthDeviceManager; 
@property (nonatomic,retain) HDDataCollectionManager * dataCollectionManager;                        //@synthesize dataCollectionManager=_dataCollectionManager - In the implementation block
@property (nonatomic,retain) HDUserCharacteristicsManager * userCharacteristicsManager;              //@synthesize userCharacteristicsManager=_userCharacteristicsManager - In the implementation block
-(void)setDaemon:(HDDaemon *)arg1 ;
-(HDDaemon *)daemon;
-(HDDataCollectionManager *)dataCollectionManager;
-(void)setDataCollectionManager:(HDDataCollectionManager *)arg1 ;
-(id<HDHealthDatabase>)healthDatabase;
-(void)setHealthDatabase:(id<HDHealthDatabase>)arg1 ;
-(HDSourceManager *)healthSourceManager;
-(void)setHealthSourceManager:(HDSourceManager *)arg1 ;
-(HDDeviceManager *)healthDeviceManager;
-(void)setHealthDeviceManager:(HDDeviceManager *)arg1 ;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(void)setUserCharacteristicsManager:(HDUserCharacteristicsManager *)arg1 ;
@end
