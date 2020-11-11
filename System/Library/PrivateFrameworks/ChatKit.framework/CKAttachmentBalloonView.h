/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@protocol CKAttachmentView;
@class UIView;

@interface CKAttachmentBalloonView : CKColoredBalloonView {

	UIView*<CKAttachmentView> _attachmentView;

}

@property (nonatomic,retain) UIView*<CKAttachmentView> attachmentView;              //@synthesize attachmentView=_attachmentView - In the implementation block
-(void)prepareForDisplay;
-(id)overlayImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForMessagePart:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(id)description;
-(void)layoutSubviews;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(id)arg1 ;
-(void)configureForComposition:(id)arg1 ;
-(UIView*<CKAttachmentView>)attachmentView;
-(void)setAttachmentView:(UIView*<CKAttachmentView>)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)richIconDidChange:(id)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
@end
