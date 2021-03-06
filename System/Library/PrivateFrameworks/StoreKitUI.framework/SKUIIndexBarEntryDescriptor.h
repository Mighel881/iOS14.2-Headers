/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreKitUI/StoreKitUI-Structs.h>
@class SKUIArtwork, NSAttributedString, UIImage;

@interface SKUIIndexBarEntryDescriptor : NSObject {

	long long _entryDescriptorType;
	SKUIArtwork* _artwork;
	NSAttributedString* _attributedString;
	UIImage* _image;
	long long _visibilityPriority;
	CGSize _size;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) long long entryDescriptorType;                    //@synthesize entryDescriptorType=_entryDescriptorType - In the implementation block
@property (nonatomic,retain) SKUIArtwork * artwork;                            //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                   //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) long long visibilityPriority;                     //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
+(id)entryDescriptorWithArtwork:(id)arg1 ;
+(id)entryDescriptorWithAttributedString:(id)arg1 ;
+(id)entryDescriptorWithImage:(id)arg1 ;
+(id)placeholderEntryDescriptorWithSize:(CGSize)arg1 ;
-(void)setArtwork:(SKUIArtwork *)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)hash;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)size;
-(UIImage *)image;
-(BOOL)isEqual:(id)arg1 ;
-(SKUIArtwork *)artwork;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setEntryDescriptorType:(long long)arg1 ;
-(long long)entryDescriptorType;
-(long long)visibilityPriority;
-(void)setVisibilityPriority:(long long)arg1 ;
@end

