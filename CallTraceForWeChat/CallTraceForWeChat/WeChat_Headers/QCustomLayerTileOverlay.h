//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTileOverlay.h"

@class NSString, QCustomLayerConfigItem;

@interface QCustomLayerTileOverlay : QTileOverlay
{
    NSString *_businessKey;
    NSString *_url;
    QCustomLayerConfigItem *_serverConfig;
}

+ (void)updateCustomLayerCaches:(id)arg1;
+ (id)getTileOverlayCachePath;
@property(retain, nonatomic) QCustomLayerConfigItem *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldRemoverTileOverlayCache;
- (void)onDownloadFail:(id)arg1 path:(const CDStruct_7e23819f *)arg2 callback:(CDUnknownBlockType)arg3 task:(id)arg4 tileKey:(id)arg5;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;
- (id)init;

@end

