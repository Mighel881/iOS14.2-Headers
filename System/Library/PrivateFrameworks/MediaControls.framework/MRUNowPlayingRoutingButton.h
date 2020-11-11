/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

@interface MRUNowPlayingRoutingButton : MPButton {

	BOOL _active;
	long long _deviceType;
	long long _context;
	CCUICAPackageView* _packageView;

}

@property (nonatomic,retain) CCUICAPackageView * packageView;              //@synthesize packageView=_packageView - In the implementation block
@property (assign,nonatomic) long long deviceType;                         //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) long long context;                            //@synthesize context=_context - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)context;
-(void)layoutSubviews;
-(BOOL)isActive;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CCUICAPackageView *)packageView;
-(void)setContext:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updatePackage;
-(void)updatePackageState;
@end
