/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsTitleCell : UITableViewCell {

	 subtitleLabel;
	 titleLabel;
	 messagesButton;
	 isAccessiblityConstraintsEnabled;
	 singleLabelTopConstraint;
	 singleLabelBottomConstraint;
	 dualLabelTopConstraint;
	 dualLabelBottomConstraint;
	 interLabelConstraint;
	 trailingTextLayoutGuide;
	 trailingTextShowingButtonLayoutConstraint;
	 trailingTextHidingButtonLayoutConstraint;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit19InCallControlButton * messagesButton; 
-(id)init;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didTapMessagesButton:(id)arg1 ;
-(_TtC15ConversationKit19InCallControlButton *)messagesButton;
@end

