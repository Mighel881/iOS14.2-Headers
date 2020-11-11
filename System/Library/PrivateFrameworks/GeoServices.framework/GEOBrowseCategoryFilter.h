/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOSearchFilter.h>
#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {

	GEOSearchCategory* _category;

}
-(id)init;
-(id)initWithCategory:(id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
@end
