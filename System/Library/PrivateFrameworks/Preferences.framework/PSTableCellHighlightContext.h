/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject {

	NSTimer* _timer;
	BOOL _animateUnhighlight;
	BOOL _valid;
	UITableViewCell* _cell;
	long long _originalSelectionStyle;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;                 //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) BOOL animateUnhighlight;                     //@synthesize animateUnhighlight=_animateUnhighlight - In the implementation block
@property (assign,nonatomic) long long originalSelectionStyle;              //@synthesize originalSelectionStyle=_originalSelectionStyle - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                  //@synthesize valid=_valid - In the implementation block
+(id)contextWithCell:(id)arg1 ;
-(void)_timerFired;
-(UITableViewCell *)cell;
-(BOOL)valid;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)_killTimer;
-(BOOL)animateUnhighlight;
-(void)performHighlightForDuration:(double)arg1 animateUnhighlight:(BOOL)arg2 ;
-(long long)originalSelectionStyle;
-(void)setOriginalSelectionStyle:(long long)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

