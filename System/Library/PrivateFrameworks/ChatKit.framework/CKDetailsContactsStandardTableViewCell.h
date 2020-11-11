/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSMutableArray;

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell {

	NSMutableArray* _visibleButtons;

}

@property (nonatomic,retain) NSMutableArray * visibleButtons;              //@synthesize visibleButtons=_visibleButtons - In the implementation block
+(double)preferredHeight;
+(double)estimatedHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateVisibleButtons;
-(void)_hideAllButtons;
-(void)setVisibleButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)visibleButtons;
@end
