/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NFLFontCache, NSString, NFUnfairLock;

@interface NFLAbstractCellPropertyProvider : NSObject {

	id* _propertiesByColumnSpan;
	double _scaleValue;
	NFLFontCache* _fontCache;
	Class _propertyClass;
	NSString* _plistName;
	unsigned long long _propertiesByColumnSpanSize;
	NFUnfairLock* _propertiesLock;

}

@property (assign,nonatomic) Class propertyClass;                                        //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,retain) NSString * plistName;                                       //@synthesize plistName=_plistName - In the implementation block
@property (assign,nonatomic) unsigned long long propertiesByColumnSpanSize;              //@synthesize propertiesByColumnSpanSize=_propertiesByColumnSpanSize - In the implementation block
@property (nonatomic,retain) NFUnfairLock * propertiesLock;                              //@synthesize propertiesLock=_propertiesLock - In the implementation block
@property (nonatomic,readonly) double scaleValue;                                        //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) NFLFontCache * fontCache;                                 //@synthesize fontCache=_fontCache - In the implementation block
+(id)publisherTitleFontLarge;
+(id)plistProvider;
+(id)publisherTitleFontSmall;
-(NFLFontCache *)fontCache;
-(unsigned long long)propertiesByColumnSpanSize;
-(id)init;
-(void)setPlistName:(NSString *)arg1 ;
-(double)scaleValue;
-(void)_loadIfNeeded;
-(void)setPropertiesByColumnSpanSize:(unsigned long long)arg1 ;
-(void)setPropertyClass:(Class)arg1 ;
-(Class)propertyClass;
-(void)setPropertiesLock:(NFUnfairLock *)arg1 ;
-(id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5 ;
-(NFUnfairLock *)propertiesLock;
-(NSString *)plistName;
-(id)propertiesForColumnSpan:(long long)arg1 ;
-(void)dealloc;
@end
