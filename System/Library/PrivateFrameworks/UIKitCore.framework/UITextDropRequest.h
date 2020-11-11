/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITextDropRequest_Private.h>
#import <UIKit/UITextDropRequest.h>
@class UITextPosition, UITextDropProposal;


@protocol UITextDropRequest <NSObject>
@property (nonatomic,readonly) UITextPosition * dropPosition; 
@property (nonatomic,readonly) UITextDropProposal * suggestedProposal; 
@property (getter=isSameView,nonatomic,readonly) BOOL sameView; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@required
-(id<UIDropSession>)dropSession;
-(BOOL)isSameView;
-(UITextDropProposal *)suggestedProposal;
-(UITextPosition *)dropPosition;

@end


@protocol UIDropSession;
@class UITextRange, UITextPosition, UITextDropProposal, NSString;

@interface UITextDropRequest : NSObject <UITextDropRequest_Private, UITextDropRequest> {

	BOOL _sameView;
	id<UIDropSession> _dropSession;
	UITextPosition* _dropPosition;
	UITextRange* _dropRange;
	UITextDropProposal* _suggestedProposal;

}

@property (nonatomic,retain) UITextDropProposal * suggestedProposal;              //@synthesize suggestedProposal=_suggestedProposal - In the implementation block
@property (assign,getter=isSameView,nonatomic) BOOL sameView;                     //@synthesize sameView=_sameView - In the implementation block
@property (nonatomic,readonly) UITextRange * dropRange;                           //@synthesize dropRange=_dropRange - In the implementation block
@property (nonatomic,readonly) UITextPosition * dropPosition;                     //@synthesize dropPosition=_dropPosition - In the implementation block
@property (nonatomic,readonly) id<UIDropSession> dropSession;                     //@synthesize dropSession=_dropSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIDropSession>)dropSession;
-(BOOL)isSameView;
-(UITextRange *)dropRange;
-(void)setSameView:(BOOL)arg1 ;
-(UITextDropProposal *)suggestedProposal;
-(void)setSuggestedProposal:(UITextDropProposal *)arg1 ;
-(id)initWithPosition:(id)arg1 range:(id)arg2 inSession:(id)arg3 ;
-(UITextPosition *)dropPosition;
@end
