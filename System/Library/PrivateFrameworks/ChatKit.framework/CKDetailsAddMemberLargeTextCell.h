/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsAddMemberCell.h>

@class UILayoutGuide;

@interface CKDetailsAddMemberLargeTextCell : CKDetailsAddMemberCell {

	UILayoutGuide* _leadingGuide;

}

@property (nonatomic,retain) UILayoutGuide * leadingGuide;              //@synthesize leadingGuide=_leadingGuide - In the implementation block
+(double)preferredHeight;
-(UILayoutGuide *)leadingGuide;
-(void)setLeadingGuide:(UILayoutGuide *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_initConstraints;
-(void)_initLabel;
@end
