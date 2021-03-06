/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXLayoutContext.h>
@class SXColumnLayout, SXUnitConverter;


@protocol SXLayoutContext <NSObject>
@property (nonatomic,readonly) SXColumnLayout * columnLayout; 
@property (nonatomic,readonly) SXUnitConverter * unitConverter; 
@required
-(SXColumnLayout *)columnLayout;
-(SXUnitConverter *)unitConverter;

@end


@class SXColumnLayout, SXUnitConverter, NSString;

@interface SXLayoutContext : NSObject <SXLayoutContext> {

	SXColumnLayout* _columnLayout;
	SXUnitConverter* _unitConverter;

}

@property (nonatomic,readonly) SXColumnLayout * columnLayout;                //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) SXUnitConverter * unitConverter;              //@synthesize unitConverter=_unitConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXColumnLayout *)columnLayout;
-(SXUnitConverter *)unitConverter;
-(id)initWithColumnLayout:(id)arg1 unitConverter:(id)arg2 ;
@end

