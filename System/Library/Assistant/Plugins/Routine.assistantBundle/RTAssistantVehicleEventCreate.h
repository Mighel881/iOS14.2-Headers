/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SALocalSearchVehicleEventCreate.h>

@class RTRoutineManager;

@interface RTAssistantVehicleEventCreate : SALocalSearchVehicleEventCreate {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end
