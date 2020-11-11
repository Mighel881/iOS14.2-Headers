/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, UIImage;

@interface CPMessageListItemTrailingConfiguration : NSObject <NSSecureCoding> {

	long long _trailingItem;
	CPImageSet* _trailingImageSet;

}

@property (nonatomic,retain) CPImageSet * trailingImageSet;              //@synthesize trailingImageSet=_trailingImageSet - In the implementation block
@property (nonatomic,readonly) long long trailingItem;                   //@synthesize trailingItem=_trailingItem - In the implementation block
@property (nonatomic,readonly) UIImage * trailingImage; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)trailingImage;
-(id)initWithCoder:(id)arg1 ;
-(long long)trailingItem;
-(CPImageSet *)trailingImageSet;
-(id)initWithTrailingItem:(long long)arg1 trailingImage:(id)arg2 ;
-(void)setTrailingImageSet:(CPImageSet *)arg1 ;
@end
