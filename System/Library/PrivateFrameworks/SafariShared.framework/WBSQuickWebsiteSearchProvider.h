/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSQuickWebsiteSearchProviderDelegate;
@class NSString, NSDate, WBSOpenSearchURLTemplate, WBSOpenSearchDescription;

@interface WBSQuickWebsiteSearchProvider : NSObject {

	id<WBSQuickWebsiteSearchProviderDelegate> _delegate;
	NSString* _displayName;
	NSString* _hostname;
	NSString* _sourcePageURLString;
	NSDate* _dateAdded;
	WBSOpenSearchURLTemplate* _searchURLTemplateFromForm;
	NSString* _openSearchDescriptionURLString;
	NSDate* _dateOfLastSearch;

}

@property (nonatomic,readonly) NSString * sourcePageURLString;                                          //@synthesize sourcePageURLString=_sourcePageURLString - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) WBSOpenSearchURLTemplate * searchURLTemplateFromForm;                      //@synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm - In the implementation block
@property (nonatomic,copy) NSString * openSearchDescriptionURLString;                                   //@synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastSearch;                                                   //@synthesize dateOfLastSearch=_dateOfLastSearch - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchDescription * openSearchDescription; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * searchURLTemplate; 
@property (nonatomic,readonly) WBSOpenSearchURLTemplate * urlTemplateForSuggestionsInJSON; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * hostname; 
-(WBSOpenSearchURLTemplate *)searchURLTemplate;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)hostname;
-(NSString *)openSearchDescriptionURLString;
-(NSDate *)dateOfLastSearch;
-(void)setDateOfLastSearch:(NSDate *)arg1 ;
-(WBSOpenSearchURLTemplate *)searchURLTemplateFromForm;
-(void)setSearchURLTemplateFromForm:(WBSOpenSearchURLTemplate *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3 ;
-(WBSOpenSearchURLTemplate *)urlTemplateForSuggestionsInJSON;
-(void)setOpenSearchDescriptionURLString:(NSString *)arg1 ;
-(id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3 ;
-(NSString *)sourcePageURLString;
-(NSDate *)dateAdded;
-(id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2 ;
-(WBSOpenSearchDescription *)openSearchDescription;
@end
