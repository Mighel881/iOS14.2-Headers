/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SearchUIKeyboardableTableViewDelegate <NSObject>
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent; 
@required
-(void)didScrollPastBottomOfContent;
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg1;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1;

@end
