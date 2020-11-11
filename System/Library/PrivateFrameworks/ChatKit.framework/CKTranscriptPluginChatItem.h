/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class IMTranscriptPluginChatItem, NSString, NSArray;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem {

	BOOL _wantsTranscriptGroupMonograms;
	BOOL _wantsOutline;
	BOOL _isAppearing;
	BOOL _isHandwriting;
	BOOL _isBusiness;
	IMTranscriptPluginChatItem* _imTranscriptPluginChatItem;
	NSString* _conversationID;
	NSArray* _recipients;

}

@property (nonatomic,retain) IMTranscriptPluginChatItem * imTranscriptPluginChatItem;              //@synthesize imTranscriptPluginChatItem=_imTranscriptPluginChatItem - In the implementation block
@property (nonatomic,readonly) BOOL isHandwriting;                                                 //@synthesize isHandwriting=_isHandwriting - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                            //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                 //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) BOOL isBusiness;                                                      //@synthesize isBusiness=_isBusiness - In the implementation block
@property (nonatomic,readonly) BOOL wantsTranscriptGroupMonograms;                                 //@synthesize wantsTranscriptGroupMonograms=_wantsTranscriptGroupMonograms - In the implementation block
@property (nonatomic,readonly) BOOL wantsBalloonGradient; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL wantsOutline;                                                  //@synthesize wantsOutline=_wantsOutline - In the implementation block
@property (nonatomic,readonly) IMTranscriptPluginChatItem * IMChatItem; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isSaved; 
@property (assign,nonatomic) BOOL isAppearing;                                                     //@synthesize isAppearing=_isAppearing - In the implementation block
-(unsigned long long)layoutType;
-(void)setIsBusiness:(BOOL)arg1 ;
-(IMTranscriptPluginChatItem *)imTranscriptPluginChatItem;
-(void)setImTranscriptPluginChatItem:(IMTranscriptPluginChatItem *)arg1 ;
-(id)balloonControllerForContext:(id)arg1 ;
-(void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(BOOL)arg4 ;
-(void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 ;
-(id)snapshotGUIDForPluginPayload:(id)arg1 ;
-(BOOL)isHandwriting;
-(BOOL)shouldSnapshot;
-(BOOL)canInlineReply;
-(BOOL)isSaved;
-(id)contact;
-(NSArray *)recipients;
-(UIEdgeInsets)contentInsets;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(BOOL)canForward;
-(id)sender;
-(BOOL)isPlayed;
-(BOOL)canCopy;
-(NSString *)bundleIdentifier;
-(NSString *)conversationID;
-(Class)cellClass;
-(void)performHostAppResumeWithContext:(id)arg1 ;
-(id)extensibleViewForContext:(id)arg1 ;
-(id)extensibleViewControllerForContext:(id)arg1 ;
-(void)relinquishBalloonControllerForContext:(id)arg1 ;
-(BOOL)wantsTranscriptGroupMonograms;
-(id)menuTitle;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 context:(id)arg4 ;
-(void)releaseBalloonControllerIfNeededForContext:(id)arg1 ;
-(id)message;
-(id)pluginDisplayContainerForContext:(id)arg1 ;
-(id)dragItemProvider;
-(id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(BOOL)wantsBalloonGradient;
-(UIEdgeInsets)textAlignmentInsets;
-(char)transcriptOrientation;
-(BOOL)wantsOutline;
-(id)loadTranscriptDrawerText;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(BOOL)isAppearing;
-(void)setIsAppearing:(BOOL)arg1 ;
-(BOOL)isBusiness;
-(id)cellIdentifier;
-(void)setConversationID:(NSString *)arg1 ;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(id)compositionWithContext:(id)arg1 ;
@end
