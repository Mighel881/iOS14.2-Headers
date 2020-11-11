/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPSKernel : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _options;
	MPSDevice* _device;
	MPSLibrary* _library;
	NSString* _label;
	BOOL _enableConcurrency;
	unsigned long long _allowedOptions;
	unsigned _tuningParams;
	unsigned _maxTuningParams;
	SCD_Union_MP19 _fileVersion;
	unsigned _privateOptions;

}

@property (assign,nonatomic) BOOL enableConcurrency;                             //@synthesize enableConcurrency=_enableConcurrency - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* fileVersion;              //@synthesize fileVersion=_fileVersion - In the implementation block
@property (assign,nonatomic) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)label;
-(id<MTLDevice>)device;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)options;
-(id)sharedInitWithDevice:(id)arg1 ;
-(BOOL)disableConcurrentEncoder;
-(/*function pointer*/void*)fileVersion;
-(void)setFileVersion:(/*function pointer*/void*)arg1 ;
-(BOOL)enableConcurrency;
-(void)setEnableConcurrency:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)dealloc;
@end
