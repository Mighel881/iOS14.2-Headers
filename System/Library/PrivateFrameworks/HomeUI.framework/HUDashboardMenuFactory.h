/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HUDashboardMenuFactory : NSObject
+(id)createAddMenuForHome:(id)arg1 delegate:(id)arg2 ;
+(id)createHomeMenuForHomes:(id)arg1 currentlySelectedHome:(id)arg2 currentLocationHome:(id)arg3 delegate:(id)arg4 ;
+(id)createRoomMenuForHome:(id)arg1 currentRoom:(id)arg2 delegate:(id)arg3 ;
+(id)createSettingsMenuForHome:(id)arg1 room:(id)arg2 incomingInvitationsCount:(unsigned long long)arg3 allowEditing:(BOOL)arg4 delegate:(id)arg5 ;
+(id)_roomActionWithRoom:(id)arg1 selected:(BOOL)arg2 delegate:(id)arg3 ;
+(id)_homeActionWithHome:(id)arg1 selected:(BOOL)arg2 currentLocation:(BOOL)arg3 delegate:(id)arg4 ;
+(id)_homeSettingsAction:(id)arg1 incomingInvitationsCount:(unsigned long long)arg2 delegate:(id)arg3 ;
+(id)_roomSettingsAction:(id)arg1 delegate:(id)arg2 ;
+(id)_editScreenAction:(id)arg1 ;
+(id)_addAccessoryAction:(id)arg1 delegate:(id)arg2 ;
+(id)_addSceneAction:(id)arg1 delegate:(id)arg2 ;
+(/*^block*/id)_actionHandlerForDelegate:(id)arg1 block:(/*^block*/id)arg2 ;
@end

