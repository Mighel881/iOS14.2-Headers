/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, UITextView, NSURL, SGSuggestedEventLaunchInfo, NSString;

@interface EKEventDetailURLCell : EKEventDetailCell <UITextViewDelegate> {

	UILabel* _URLTitleView;
	UITextView* _URLView;
	int _lastLayoutPosition;
	NSURL* _url;
	SGSuggestedEventLaunchInfo* _launchInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_SGSuggestionsServiceClass;
-(id)_URLView;
-(BOOL)update;
-(void)layoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithEvent:(id)arg1 url:(id)arg2 editable:(BOOL)arg3 style:(long long)arg4 ;
-(id)initWithEvent:(id)arg1 launchInfo:(id)arg2 editable:(BOOL)arg3 style:(long long)arg4 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(BOOL)updateLink;
-(void)updateLinkWithURL;
-(void)updateLinkWithLaunchInfo;
-(void)_layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)_URLTitleView;
@end

