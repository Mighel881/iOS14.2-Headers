/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUI/CoreUI-Structs.h>
@interface CUIRenditionMetrics : NSObject {

	CGSize _imageSize;
	CGSize _edgeBottomLeftMargin;
	CGSize _edgeTopRightMargin;
	CGSize _contentBottomLeftMargin;
	CGSize _contentTopRightMargin;
	double _baseline;
	CGSize _auxiliary1BottomLeftMargin;
	CGSize _auxiliary1TopRightMargin;
	CGSize _auxiliary2BottomLeftMargin;
	CGSize _auxiliary2TopRightMargin;
	double _scale;
	struct {
		unsigned scalesVertically : 1;
		unsigned scalesHorizontally : 1;
		unsigned reserved : 14;
	}  _crmFlags;

}
-(CGSize)imageSize;
-(double)baseline;
-(CGSize)contentTopRightMargin;
-(BOOL)hasAlignmentEdgeMargins;
-(CGRect)insetRectWithMetrics:(CGRect)arg1 ;
-(BOOL)scalesHorizontally;
-(CGSize)auxiliary2BottomLeftMargin;
-(CGRect)insetContentRectWithMetrics:(CGRect)arg1 ;
-(BOOL)hasOpaqueContentBounds;
-(CGSize)auxiliary1TopRightMargin;
-(CGSize)edgeBottomLeftMargin;
-(CGRect)edgeRect;
-(CGSize)auxiliary1BottomLeftMargin;
-(CGRect)contentRect;
-(CGSize)auxiliary2TopRightMargin;
-(BOOL)scalesVertically;
-(CGSize)edgeTopRightMargin;
-(double)scale;
-(CGSize)contentBottomLeftMargin;
@end
