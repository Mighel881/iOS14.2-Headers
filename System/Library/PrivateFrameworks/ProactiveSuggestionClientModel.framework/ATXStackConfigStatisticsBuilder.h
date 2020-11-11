/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface ATXStackConfigStatisticsBuilder : NSObject {

	NSString* _widgetBundleId;
	NSString* _widgetKind;
	NSString* _containerBundleIdentifier;
	long long _widgetFamily;
	NSDate* _timestamp;
	long long _countOfSmartStacksWithWidget;
	long long _countOfNonSmartStacksWithWidget;
	long long _countOfStandaloneWidgets;
	long long _countOfWidgetsWithUnknownStackKind;

}

@property (nonatomic,copy,readonly) NSString * widgetBundleId;                          //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetKind;                              //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;               //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long widgetFamily;                                  //@synthesize widgetFamily=_widgetFamily - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long countOfSmartStacksWithWidget;                    //@synthesize countOfSmartStacksWithWidget=_countOfSmartStacksWithWidget - In the implementation block
@property (assign,nonatomic) long long countOfNonSmartStacksWithWidget;                 //@synthesize countOfNonSmartStacksWithWidget=_countOfNonSmartStacksWithWidget - In the implementation block
@property (assign,nonatomic) long long countOfStandaloneWidgets;                        //@synthesize countOfStandaloneWidgets=_countOfStandaloneWidgets - In the implementation block
@property (assign,nonatomic) long long countOfWidgetsWithUnknownStackKind;              //@synthesize countOfWidgetsWithUnknownStackKind=_countOfWidgetsWithUnknownStackKind - In the implementation block
-(NSString *)widgetKind;
-(id)build;
-(NSString *)widgetBundleId;
-(long long)countOfSmartStacksWithWidget;
-(long long)countOfNonSmartStacksWithWidget;
-(long long)countOfStandaloneWidgets;
-(long long)countOfWidgetsWithUnknownStackKind;
-(id)initWithWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 ;
-(void)setCountOfSmartStacksWithWidget:(long long)arg1 ;
-(void)setCountOfNonSmartStacksWithWidget:(long long)arg1 ;
-(void)setCountOfStandaloneWidgets:(long long)arg1 ;
-(void)setCountOfWidgetsWithUnknownStackKind:(long long)arg1 ;
-(NSString *)containerBundleIdentifier;
-(long long)widgetFamily;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
@end
