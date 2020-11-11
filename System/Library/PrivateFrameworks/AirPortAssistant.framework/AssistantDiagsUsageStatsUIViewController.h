/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TextLinkButtonDelegate.h>

@class UIView, TextLinkButton, NSString;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate> {

	UIView* _linkContainerView;
	TextLinkButton* linkButton;
	id previousNavDelegate;

}

@property (nonatomic,retain) UIView * linkContainerView;              //@synthesize linkContainerView=_linkContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)dealloc;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)handleTextLinkTap;
-(void)setLinkContainerView:(UIView *)arg1 ;
-(void)setUpInitialTableFooter;
-(UIView *)linkContainerView;
@end
