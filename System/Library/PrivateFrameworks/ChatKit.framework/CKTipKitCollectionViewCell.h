/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class TPKContentView;

@interface CKTipKitCollectionViewCell : UICollectionViewCell {

	TPKContentView* _tipKitContentView;

}

@property (nonatomic,retain) TPKContentView * tipKitContentView;              //@synthesize tipKitContentView=_tipKitContentView - In the implementation block
+(id)reuseIdentifier;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setTipKitContentView:(TPKContentView *)arg1 ;
-(TPKContentView *)tipKitContentView;
-(void)dealloc;
@end
