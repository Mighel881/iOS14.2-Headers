/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject {

	double _lastLogTime;
	BLTSectionInfoList* _sectionInfoList;

}

@property (nonatomic,retain) BLTSectionInfoList * sectionInfoList;              //@synthesize sectionInfoList=_sectionInfoList - In the implementation block
+(id)sharedNotificationEnabledSettingsLogger:(id)arg1 ;
-(id)init;
-(void)_log;
-(void)_performActivity:(id)arg1 ;
-(void)_registerActivity;
-(void)setSectionInfoList:(BLTSectionInfoList *)arg1 ;
-(BLTSectionInfoList *)sectionInfoList;
@end
