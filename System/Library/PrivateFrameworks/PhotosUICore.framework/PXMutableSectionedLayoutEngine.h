/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property (nonatomic,retain) id<PXSectionedLayoutItem> seedItem; 
@property (assign,nonatomic) CGSize seedSize; 
@required
-(CGSize)seedSize;
-(void)setSeedSize:(CGSize)arg1;
-(id<PXSectionedLayoutItem>)seedItem;
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
-(void)setSeedItem:(id)arg1;

@end
