/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNGuidanceManager <NSObject>
@required
-(void)updateDestination:(id)arg1;
-(void)stop;
-(void)updateForReroute:(id)arg1;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1;

@end

