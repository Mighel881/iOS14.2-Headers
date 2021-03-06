/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _SFBarManagerDelegate;
#import <SafariServices/SafariServices-Structs.h>
@class NSMapTable, NSTimer, NSArray;

@interface _SFBarManager : NSObject {

	NSMapTable* _barToRegistrationMap;
	BOOL _deferUpdateAllRegistrations;
	BOOL _needsUpdateAllRegistrations;
	NSTimer* _coalescedUpdatesTimer;
	double _lastCoalescedUpdatesTime;
	/*^block*/id _coalescedUpdatesBlock;
	NSArray* _itemConfigurationMap;
	BOOL _bookmarksItemSelected;
	id<_SFBarManagerDelegate> _delegate;
	double _downloadsItemProgress;

}

@property (assign,nonatomic,__weak) id<_SFBarManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isBookmarksItemSelected,nonatomic) BOOL bookmarksItemSelected;              //@synthesize bookmarksItemSelected=_bookmarksItemSelected - In the implementation block
@property (assign,nonatomic) double downloadsItemProgress;                                           //@synthesize downloadsItemProgress=_downloadsItemProgress - In the implementation block
-(id)test_registrationForBar:(id)arg1 ;
-(BOOL)isBarItemHidden:(long long)arg1 ;
-(id)init;
-(unsigned long long)test_numberOfRegistrations;
-(void)setBarItem:(long long)arg1 enabled:(BOOL)arg2 ;
-(id<_SFBarManagerDelegate>)delegate;
-(BOOL)isBookmarksItemSelected;
-(void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2 ;
-(void)_invalidateCoalescedUpdatesTimer;
-(void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2 ;
-(void)setDelegate:(id<_SFBarManagerDelegate>)arg1 ;
-(void)_performCoalescedUpdatesNow;
-(CGRect)frameForBarItem:(long long)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_updateAllRegistrations;
-(void)setBookmarksItemSelected:(BOOL)arg1 ;
-(void)setDownloadsItemNeedsLayout;
-(BOOL)isBarItemEnabled:(long long)arg1 ;
-(void)_updateRegistration:(id)arg1 ;
-(void)setBarItem:(long long)arg1 hidden:(BOOL)arg2 ;
-(void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3 ;
-(double)downloadsItemProgress;
-(void)setDownloadsItemProgress:(double)arg1 ;
-(void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2 ;
-(void)visibleBarItemsNeedUpdate;
-(BOOL)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2 ;
-(void)performCoalescedUpdates:(/*^block*/id)arg1 ;
-(void)setBarItem:(long long)arg1 menuProvider:(/*^block*/id)arg2 ;
-(void)pulseDownloadsItem;
@end

